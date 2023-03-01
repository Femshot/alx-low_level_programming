#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings together
 * @dest: Pointer to string that will receive concatenated string
 * @src: Pointer to string that will be appended
 *
 * Return: Pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}
