#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: String containing numbers
 *
 * Return: converted number, if fail return 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1, res = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	for (--i; i >= 0; i--)
	{
		if (b[i] >= '0' && b[i] <= '1')
		{
			res += (b[i] - '0') * j;
			j *= 2;
		}
		else
			return (0);
	}
	return (res);
}
