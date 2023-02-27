#include "main.h"

/**
 * _puts - Prints inputed string to stdout
 * @str: String to to printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
