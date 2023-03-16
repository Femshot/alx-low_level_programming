#include "main.h"

/**
 * _strdup - Copies the value of a string to a newly allocated memory space
 * @str: Pointer to  string to be copied
 *
 * Return: Pointer to new duplicate string, NULL if failed to create space
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	ptr = malloc((len + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(ptr + i) = *(str + i);
	*(ptr + i) = '\0';
	return (ptr);
}
