#include "main.h"

/**
 * _strchr - Locates the first occurence of a character in string
 * @s: Pointer to string to be checked
 * @c: Character to check for
 *
 * Return: pointer to location of first occurence for c in s
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr = NULL;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (ptr = (s + i));
	}
	return (ptr);
}
