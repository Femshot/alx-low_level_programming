#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Returns integar difference between both strings
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 && *s2)
	{
		diff = *s1 - *s2;
		if (diff > 0 || diff < 0)
			return (diff);
		s1++;
		s2++;
	}
	return (diff);
}
