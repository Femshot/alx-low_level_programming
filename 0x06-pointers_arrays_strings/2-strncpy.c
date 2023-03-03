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

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n && dest[i]; i++)
		dest[i] = '\0';

	return (ptr);
}
