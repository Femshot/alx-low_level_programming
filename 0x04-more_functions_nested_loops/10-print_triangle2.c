#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
