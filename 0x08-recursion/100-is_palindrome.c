#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to string
 *
 * Return: 1 is palindrome else 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0)
		return (1);
	else
		return (comp_str(s, (len - 1)));
}
/**
 * comp_str - compares from both ends of a string
 * @s: string to be analysed
 * @n: length of string
 * Return: 1 is succesful compare, 0 if failed compare
 */
int comp_str(char *s, int n)
{
	if (n < 1)
		return (1);

	if (*s == *(s + n))
		return (comp_str((s + 1), (n - 2)));

	return (0);
}
/**
 * _strlen_recursion - Computes and the length of a string
 * @s: Pointer to string
 * Return: Length of string in s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
