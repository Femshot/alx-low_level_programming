#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times each on a line
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 'a';
		for (; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
