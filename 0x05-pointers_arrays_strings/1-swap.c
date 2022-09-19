#include "main.h"

/**
 * swap_int - swaps the value of variables for pointers a & b
 * @a: a pointer to integar a
 * @b: a pointer to integar b
 */

void swap_int(int *a, int *b)
{
	*a = (unsigned long int) b;
	*b = (unsigned long int) a;
}
