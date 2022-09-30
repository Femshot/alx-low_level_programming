#include "main.h"

/**
 * _memcpy - function that copys memory area
 * @dest: memory area copied's destination
 * @src: memory area copied's source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i;

	i = dest;
	while (n--)
	{
		*dest = *src;
			src++;
			dest++;
	}
	return (i);
}
