#include "main.h"

/**
 * _strlen_recursion - Computes and the length of a string
 * @s: Pointer to string
 *
 * Return: Length of string in s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
