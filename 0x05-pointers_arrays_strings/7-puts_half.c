#include "main.h"

/**
 * puts_half - Prints second half of inputed string to stdout
 * @str: String to to printed
 */
void puts_half(char *str)
{
	int i = 0, n = 0, m;
	char *tmp = str;

	while (*str++ != '\0')
		i++;
	str = tmp;

	if (i % 2 == 0)
		m = i / 2;
	else
		m = (i / 2) + 1;
	for (n = m; n < i; n++)
		_putchar(str[n]);
	_putchar('\n');
}
