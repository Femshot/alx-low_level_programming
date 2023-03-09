#include "main.h"
#include <stdio.h>

/**
 * factorial - Computes the factorial of a given number
 * @n: Number to be computed
 *
 * Return: -1 if n < 0, factoial of n if n => 0
 */
int factorial(int n)
{
	int res;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
