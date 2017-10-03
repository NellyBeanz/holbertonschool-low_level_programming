#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of a square matrix of integers
 * @a: matrix address
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int b;
	int sum;

	sum = 0;
	for (b = 0; b < size; b++)
		sum += a[b * size + b];
	printf("%d, ", sum);

	sum = 0;
	for (b = 0; b < size; b++)
		sum += a[b * size + (size - b - 1)];
	printf("%d\n", sum);
}
