#include "main.h"

/**
 * _strcpy - Copies the string pointed to by pointer src to the buffer pointed
 * to by dest
 * @dest: Destination memory locatin
 * @src: Source memory location
 *
 * Return: Pointer to destination buffer space
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;
	char *ptr = dest;

	while (*(src + i) != '\0')
		i++;

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	dest[j] = '\0';
	return (ptr);
}
