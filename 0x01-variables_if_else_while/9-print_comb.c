#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */

int main(void)
{
	int (sigd);

	for (sigd = '0'; sigd <= '9'; sigd++)
	{
		putchar(sigd);
	if (sigd < '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
