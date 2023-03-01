#include "main.h"

/**
 * puts2 - Prints inputed string to stdout every other character at a time
 * @str: String to to printed
 */
void puts2(char *str)
{
	int i = 0, n = 0;

	while (str[i] != '\0')
		i++;
	for (; n < i; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
