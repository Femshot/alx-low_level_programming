#include <stdio.h>

/**
 * main - prints alphabet in lower case one at a time on a sinlge line
 *
 * Return: 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
		putchar(a++);
	putchar('\n');
	return (0);
}
