#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to string
 */
void print_rev(char *s)
{
	int i = 0;
	char *f = s;

	while (*s++ != '\0')
		i++;
	--i;
	s = f; /*takes s back to starting point*/
	for (; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
