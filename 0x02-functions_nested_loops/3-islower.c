#include "main.h"

/**
 * _is lower - prints alpahbet in lowercase
 * @c: input character
 *
 *Return: 1 if lowercase or 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
