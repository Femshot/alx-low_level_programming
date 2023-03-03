#include "main.h"

/**
 * _strncpy - Copy n btes of string from a pointer source to a
 * pointer destination
 * @dest: Destination pointer string
 * @src: Source pointer string
 * @n: Number of bytes of src to be appended
 *
 * Return: Pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (src[i])
		i++;
	if (n > i)
		n = i;
	i = 0;
	for (; i < n && src[i] != '\0'; i++)
		*dest++ = *src++;

	for (; i < n && *dest; i++)
		*dest++ = '\0';

	return (ptr);
}
