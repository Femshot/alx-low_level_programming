#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: address of variable holding number
 * @index: Index of bit to set
 *
 * Return: 1 if succesful or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1;

	if (index > 63)
		return (-1);
	*n &= ~(j << index);
	return (1);
}
