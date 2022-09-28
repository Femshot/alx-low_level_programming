#include "main.h"

/**
 * _pow_recursion - computes the value of x raised to power y
 * @x: integar to be raised
 * @y: integar to raise x to
 * Return: value computed
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
