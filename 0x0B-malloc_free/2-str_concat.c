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
	int len1 = 0, len2 = 0, i, j;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL || len1 == 0 || len2 == 0)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; j < len2; j++, i++)
		*(ptr + i) = *(s2 + j);
	*(ptr + i) = '\0';
	return (ptr);
}
