#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from a number up unto 98
 * @n: Number to begin at
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
