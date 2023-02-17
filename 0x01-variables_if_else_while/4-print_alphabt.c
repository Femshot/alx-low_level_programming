#include <stdio.h>

/**
 * main - prints alphabet in lower case one at a time on a sinlge line
 *		  except letters 'e' & 'q'
 *
 * Return: 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
