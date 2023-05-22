#include "main.h"

/**
 * _abs - Computes absolute value of an integar
 * @n: Integar number to be checked
 *
 * Return: Absolute value of the integar n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
