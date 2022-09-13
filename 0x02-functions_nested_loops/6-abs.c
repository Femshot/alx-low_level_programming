#include "holberton.h"

/**
 * _abs - Check absolute value of a number
 * @r: An integer input
 *
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
