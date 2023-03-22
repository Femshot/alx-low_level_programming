#include "function_pointers.h"

/**
 * print_name - Function pointer that callback a function to print name passed
 * @name: Pointer to name string
 * @f: Pointer to function that prints a name string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
