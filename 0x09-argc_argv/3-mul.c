#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	int multiply;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
		return (0);
	}
}
