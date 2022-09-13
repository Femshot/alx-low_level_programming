#include "main.h"

/**
 * _isalpha - Check for Alphabetic character,
 * returns 1 if c is lowercase or uppercase letter
 * @c: An input character
 *
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
