#include "main.h"

/**
 * _strncat - Concatenates two strings together to n bytes of src
 * @dest: Pointer to string that will receive concatenated string
 * @src: Pointer to string that will be appended
 * @n: Number of bytes of src to be appended
 *
 * Return: Pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest, *start = src;
	int i = 0, j = 0;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		i++;
		src++;
	}

	if (n >= i)
		n = i;

	src = start;
	for (; j < n; j++)
		*dest++ = *src++;

	*dest++ = '\0';
	return (ptr);
}
