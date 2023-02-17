#include <stdio.h>

/**
 * main - prints 0 - 9 on a sinlge line
 *
 * Return: 0
 */

int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);
	putchar('\n');
	return (0);
}
