#include "main.h"

/**
 * _pow_recursion - Computes x rasied to the pwer of y
 * @x: A random integar
 * @y: A random integar
 *
 * Return: -1 if y < 0, else x rasied to power y
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
