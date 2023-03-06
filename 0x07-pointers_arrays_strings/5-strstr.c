#include "main.h"
#include <stddef.h>

/**
 * _strstr - LOcate a substring in a string
 * @haystack: String to be checked
 * @needle: Substring to be checked
 *
 * Return: Pointer to firt word of substring in haystack if substring found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int len = 0;
	char *ptr = NULL;

	while (*(needle + len))
		len++;

	len -= 1;
	while (*(haystack + i))
	{
		if (j != len && (*(haystack + i) == *(needle + j)))
			j++;

		if (*(haystack + i) != *(needle + j) && j > 0 && j < len)
			ptr = NULL;

		else if (j == len && (*(haystack + i) == *(needle + j)))
			return (haystack + (i - j));

		i++;
	}
	return (ptr);
}
