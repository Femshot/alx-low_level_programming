#include "main.h"
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc and sets it to zero
 * @nmemb: Number of memebers of type
 * @size: Number of bytes in unit type
 *
 * Return: Pointer to Allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *str;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	str = ptr;
	while (i < (nmemb * size))
		*(str + i++) = 0;
	return (ptr);
}
