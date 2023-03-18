#include <stdio.h>
#include <stdlib.h>
int make_array(char *s, char **p);

/**
 * strtow - Splits a string into words
 * @str: Pointer to string
 *
 * Return: Pointer to array of words from string
 */
char **strtow(char *str)
{
	char **ptr;
	int i, count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			count++;
	if (count == 0)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	count = make_array(str, ptr);
	if (count > 0)
	{
		for (; count >= 0; count--)
			free(ptr[count]);
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

/**
 * make_array - Creates an array of words
 * @s: Pointer to a string
 * @p: Pointer to Pointer to a memory location that holds strings
 *
 * Return: 0 if success, else point of fail
 */
int make_array(char *s, char **p)
{
	int i, k, letter = 0, j = 0, count;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] != ' ')
			letter++;
		if (s[i - 1] != ' ' && i != 0 && (s[i] == ' ' || s[i + 1] == '\0'))
		{
			p[j] = (char *)malloc(sizeof(char *) * (letter + 1));
			if (p[j] == NULL)
				return (j);
			count = letter;
			if (s[i + 1] == '\0' && s[i] != ' ')
				i++;
			for (k = 0; k < count; k++, letter--)
				p[j][k] = s[i - letter];
			p[j][k] = '\0';
			j++;
		}
		if (s[i] == '\0')
			break;
	}
	p[j] = NULL;
	return (0);
}
