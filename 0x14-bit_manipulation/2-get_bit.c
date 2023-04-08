#include <stdio.h>

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Number to check
 * @index: Binary index to check
 *
 * Return: value at binary index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j = 1;

	if (index > 63)
		return (-1);
	if (n & (j << index))
		return (1);
	else
		return (0);
}
