#include "main.h"

/**
 * _strcat - Appends the string stored in *src into the string in *dest
 * @dest: an input string
 * @src: an input string
 * Return: Address of resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	*dest = '\0';
	while (*src)
		*dest++ = *src++;

	return (temp);
}
