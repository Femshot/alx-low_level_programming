#include "main.h"

/**
 * argstostr - Concatenates all the arguments of its program
 * Description: Concatenates all the arguments of its program separating each
 * with a new line
 * @ac: Argument counter
 * @av: Pointer to pointer of arguments vector
 *
 * Return: Pointer to new concantenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, p = 0, size = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; *(*(av + i) + j); j++)
			size++;

	ptr = (char *)malloc((sizeof(char) * size) + ac + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, p++)
	{
		for (j = 0; *(*(av + i) + j); j++, p++)
			*(ptr + p) = *(*(av + i) + j);
		*(ptr + p) = '\n';
	}
	*(ptr + p) = '\0';
	return (ptr);
}
