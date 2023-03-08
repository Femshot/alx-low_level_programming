#include "main.h"

/**
 * _sqrt_recursion - Computes natuaral squareroot of n
 * @n: Input integar
 *
 * Return: -1 if n doesn't have natural squareroot else natural squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int prev, int root)
{
	if (prev > (root / 2))
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
