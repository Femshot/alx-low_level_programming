#include "main.h"

/**
 * _atoi - Converts an integar string into an integar
 * @s: Integar string to be converted
 *
 * Return: 0 if no intergar string found else integar number
 */
int _atoi(char *s)
{
	int sign = 1, num_end = 0;
	unsigned int total = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			num_end = 1;
			total = total * 10 + *s - '0';
		}
		else if (num_end)
			break;
		s++;
	}

	if (sign < 0)
		total = (-total);

	return (total);
}
