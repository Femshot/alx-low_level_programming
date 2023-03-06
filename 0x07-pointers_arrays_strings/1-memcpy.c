#include "main.h"

/**
 * _memcpy - Fills a memory location of dest with memory area of src
 * to a certain number
 * @dest: Pointer to destination memory location
 * @src: Pointer to source memory location
 * @n: Number of memory spots in src to fill from
 *
 * Return: Pointer to memory thats been filled
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (ptr);
}
