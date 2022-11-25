#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *temp = dest;

	while (src[len] != '\0')
		len++;

	if (n > len)
		n = len;

	for (; i < n; i++)
		*dest++ = *src++;
	/*unfinished*/

	while(*dest)
		*dest++;

	*dest = '\0';
	return (temp);
}
