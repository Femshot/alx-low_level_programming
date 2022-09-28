#include "main.h"

/**
 * factorial - computes factorial of a given number
 * @n - number to cumpute
 * return: factorial of n computed if n is greater than 0 or 0 if n is 0
 * or -1 if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		return (n * factorial(n-1);
	}
}
