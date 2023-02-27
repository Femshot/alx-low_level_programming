#include "main.h"

/**
 * puts2 - Prints inputed string to stdout
 * @str: String to to printed
 */
void puts2(char *str)
{
	int i, n= 0;
	char *tmp = str;

	while (*str++ != '\0')
		i++;
	str = tmp;
	for (; n < i; n +=2)
		_putchar(str[n]);
	_putchar('\n');
}
