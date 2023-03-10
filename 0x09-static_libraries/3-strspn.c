#include "main.h"

/**
 * _strspn - Calculates the length of prefix substring
 * Description: Calculates the length (in bytes) of the initial segment of
 * string in "s" which consists entirely of bytes in accept.
 * @s: Pointer to string that"ll be checked
 * @accept: Pointer to string used as refrence
 *
 * Return: The length (in bytes) of the initial segment of s which consists
 * entirely of bytes in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match;

	for (i = 0; *(s + i); i++)
	{
		match = 0;
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				match = 1;
		}
		if (match == 0)
			return ((unsigned int) i);
	}
	return (0);
}
