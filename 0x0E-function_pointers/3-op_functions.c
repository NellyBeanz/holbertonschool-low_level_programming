#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function to add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub - function to subtract two integers
 * @a: first integer
 * @b: second integer
 * 
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{	
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that gives remainder of two integers when divided
 * @a: first integer
 * @b: second integer
 * 
 * Return: remainder of a and b when divided
 */ 
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
