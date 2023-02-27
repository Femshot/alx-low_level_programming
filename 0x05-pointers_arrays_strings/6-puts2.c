#include "main.h"

/**
 * puts2 - Prints inputed string to stdout every other character at a time
 * @str: String to to printed
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i != 0)
			str++;
		_putchar(str);
		str++;
		i++;
	}

	_putchar('\n');
}
