#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = '0'; b <= '9'; b++)
	{
		if (a != b)
	{
		putchar(a);
		putchar(b);

		if (a == '8' && b == '9')
		continue;

		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}


