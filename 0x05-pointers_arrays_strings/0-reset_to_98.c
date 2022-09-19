#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - changes value of int to a pointer to 98
 * 'n' - A pointer
 * &n - address of variable held be pointer A
 */

void reset_to_98(int *n)
{
	*n = 98;
}
