#include "main.h"

/**
 * swap_int - swaps the value of variables for pointers a & b
 * @a: a pointer to integar a
 * @b: a pointer to integar b
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
