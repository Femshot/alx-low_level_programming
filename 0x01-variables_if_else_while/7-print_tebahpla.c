#include <stdio.h>

/**
 * main - prints alphabet in lower case but in reverse, on a sinlge line
 *
 * Return: 0
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
		putchar(a--);
	putchar('\n');
	return (0);
}
