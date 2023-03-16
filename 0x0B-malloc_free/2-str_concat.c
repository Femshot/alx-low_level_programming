#include "main.h"

/**
 * str_concat - Concatenates two strings passed in it at new memory location
 * @s1: Pointer to the first string
 * @s2: Pointer to the 2nd sring that gets joined to s1
 *
 * Return: pointer to location of concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;
	if (s1 != NULL)
		while (*(s1 + len1))
			len1++;
	if (s2 != NULL)
		while (*(s2 + len2))
			len2++;

	ptr = malloc(sizeof(*ptr) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (; i < len1; i++)
		*(ptr + i) = *(s1 + i);
	for (; j < len2; j++, i++)
		*(ptr + i) = *(s2 + j);
	*(ptr + i) = '\0';
	return (ptr);
}
