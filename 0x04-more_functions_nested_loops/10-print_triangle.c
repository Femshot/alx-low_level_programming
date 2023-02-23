#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer for the triangle height.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
