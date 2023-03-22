#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Addition of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: Substraction of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Multiplication of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: Division of the two integers
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
 * op_mod - Modulo divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: Modulo ivision of the two integers
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
