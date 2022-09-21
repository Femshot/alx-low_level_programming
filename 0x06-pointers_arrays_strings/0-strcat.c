#include "main.h"

/**
 * _strncat - Appends the string stored in *src into the string in *dest
 * @dest: an input string
 * @src: an input string
 * Return: Address of resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
