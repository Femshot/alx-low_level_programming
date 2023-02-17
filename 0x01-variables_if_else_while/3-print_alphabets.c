#include <stdio.h>

/**
 * main - prints alphabet in lowercase and UPPERCASE one at a time on a
 *		  sinlge line
 *
 * Return: 0
 */

int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
		putchar(a++);
	while (A <= 'Z')
		putchar(A++);
	putchar('\n');
	return (0);
}
