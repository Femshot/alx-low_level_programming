#include "main.h"

/**
 * cap_string - Capitalises the first character of every word in a string
 * @str: Pointer to input string
 *
 * Return: Pointer to  capitalised input string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	char sep[13] = {32, '\n', '\t', ',', ';', '.', '!', '?', '"',
					'(', ')', '{', '}'};
	int i, next_word, len = 0;

	while (*str != '\0')
	{
		if (len == 0 && *str >= 97 && *str <= 122)
			*str -= 32;

		i = 0;
		for (i = 0; i < 13; i++)
		{
			if (*str == sep[i])
			{
				next_word += sep[i];
				str++;
				continue;
			}
			else if (*str >= 97 && *str <= 122 && next_word > 0)
				*str -= 32;
		}
		str++;
		len++;
		next_word = 0;
	}
	return (ptr);
}
