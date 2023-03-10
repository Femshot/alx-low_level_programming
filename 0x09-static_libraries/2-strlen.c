#include "main.h"

/**
 * _strlen - Determines the length of input string
 * @s: Address od string to be measured
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
