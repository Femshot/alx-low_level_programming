#include "main.h"

/**
 * _isalpha - checks character if it's an alphabetic characters
 * @c: character to check
 *
 * Return: 1 if true, 0 if otherwise
 */ 
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
