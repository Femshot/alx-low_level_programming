#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches for any bytes of substring
 * Description: Locates the first coccurence of any byte of the of string in
 * accept which is found in s.
 * @s: Pointer to string that'll be checked
 * @accept: Pointer to string used as refrence
 *
 * Return: The first location in s that matches a byte in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr = NULL;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
			if (*(s + i) == *(accept + j))
				return (ptr = (s + i));
	}
	return (ptr);
}
