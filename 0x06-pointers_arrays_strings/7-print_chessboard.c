#include "holberton.h"

/**
 * print_chessboard - print the chessboard
 * @a: array to print
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int colu;

	for (row = 0; row < 8; row++)
	{
		for (colu = 0; colu < 8; colu++)
			_putchar(a[row][colu]);
		_putchar('\n');
	}
}
