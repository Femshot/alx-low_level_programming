#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char a = 'a';
	int i = 48;

	while (i < 58)
		putchar(i++);
	while (a <= 'f')
		putchar(a++);
	putchar('\n');
	return (0);
}
