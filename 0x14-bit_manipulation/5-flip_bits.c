#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 63;
	unsigned int flip = 0;
	unsigned long int j = 1, k = (n ^ m);

	while (count >= 0)
	{
		if (k & (j << count))
			flip++;
		count--;
	}
	return (flip);
}
