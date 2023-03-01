#include "main.h"

/**
 * puts_half - Prints second half of inputed string to stdout
 * @str: String to to printed
 */
void puts_half(char *str)
{
	int i = 0, m;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		m = i / 2;
	else
		m = (i / 2) + 1;
	for (; m < i; m++)
		_putchar(str[m]);
	_putchar('\n');
}
