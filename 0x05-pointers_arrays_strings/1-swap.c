#include "main.h"

/**
 * swap_int - Swaps the values of to integar arguments
 * @a: first integar argument
 * @b: Second integar argument
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
