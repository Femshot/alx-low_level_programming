#include "main.h"

/**
 * string_nconcat - Concatenates two strings taking only the first n bytes of
 * the second string ina new block of memory
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes in second string to take into account
 *
 * Return: Pointer to memory block containing new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
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
	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(*ptr) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
		*(ptr + i) = *(s2 + j);
	*(ptr + i) = '\0';

	return (ptr);
}
