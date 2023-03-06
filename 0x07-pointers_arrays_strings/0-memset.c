#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills a memory location with consatn byte up to a certain number
 * @s: Pointer to memory location
 * @b: Constant byte to fill in
 * @n: Number of memory spots in s to fill
 *
 * Return: Pointer to memory thats been filled
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	*(s + i) = '\0';
	return (ptr);
}
