#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory block to be allocated
 *
 * Return: Pointer to allocated memory if succesful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	int size = (int)b;

	ptr = malloc(size);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
