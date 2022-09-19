#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: An input string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = 0, i, k;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		k = len / 2;

	else
		k = (len + 1) / 2;

	for (i = k; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
