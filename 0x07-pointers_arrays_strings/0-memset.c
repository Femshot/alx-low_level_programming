#include "main.h"

/**
 * _memset - Fills a memory location with consatn byte up to a certain number
 * @s: Pointer to memory location
 * @b: Constant byte to fill in
 * @n: Number of memory spots in s to fill
 *
 * Return: Pointer to memory thats been filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (ptr);
}
