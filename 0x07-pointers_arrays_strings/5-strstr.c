#include "main.h"
#include <stdio.h>

/**
 * _strstr - LOcate a substring in a string
 * @haystack: String to be checked
 * @needle: Substring to be checked
 *
 * Return: Pointer to firt word of substring in haystack if substring found
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
