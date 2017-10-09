#include <stdio.h>

/**
 * main - prints the number of arguments passed onto it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Void
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
