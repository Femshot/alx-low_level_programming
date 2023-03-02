#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: Pointer to string of text to encrypt
 *
 * Return: Pointer to encrypted text string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char alp[52] = {
	'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E',
	'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J',
	'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O',
	'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T',
	'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y',
	'z', 'Z',};
	char rot[52] = {
	'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R',
	's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W',
	'x', 'X', 'y', 'Y', 'z', 'Z', 'a', 'A', 'b', 'B',
	'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G',
	'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L',
	'm', 'M',};
	int i;

	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == alp[i])
			{
				*str = rot[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
