#include "main.h"

/**
 * _print_rev_recursion - Prints a string followed by a new line
 * @s: Pointer to string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	if (*s != '\0')
		_putchar(*s);
}
