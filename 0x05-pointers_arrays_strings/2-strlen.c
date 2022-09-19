#include "main.h"

/**
 * _strlen - gives the lenght of a string
 * @s: - the input string
 * Return: nothing
 */

int _strlen(char *s)
{
	int len = 0;

		while (s[len] != '\0')
			len++;
	return (len);
}
