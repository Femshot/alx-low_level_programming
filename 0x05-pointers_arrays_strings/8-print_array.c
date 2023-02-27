#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integars
 * @a: address of array
 * @n: number of elements in array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}

