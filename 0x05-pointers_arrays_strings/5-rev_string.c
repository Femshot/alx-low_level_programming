#include "main.h"

/**
 * rev_string - Reverse a string followed by a new line
 * @s: an input string
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len)
	{
		--len;
		aux = s[i];
		s[i] = s[len];
		s[len] = aux;
		i++;
	}
}
