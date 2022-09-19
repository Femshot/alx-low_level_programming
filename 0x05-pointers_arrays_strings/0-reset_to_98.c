#include <stdio.h>

/**
 * reset_to_98 - changes value of int to a pointer to 98
 * 'a' - A pointer
 * &n - address of variable held be pointer A
 */

void reset_to_98(int *n)
{
	int *n = &n;

	*a = 98;
}
