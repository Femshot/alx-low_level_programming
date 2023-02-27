#include "main.h"

/**
 * puts2 - Prints inputed string to stdout
 * @str: String to to printed
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
