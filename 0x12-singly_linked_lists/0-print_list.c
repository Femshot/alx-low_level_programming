#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: Pointer to the list_t
 *
 * Return: Number of nodes present in list
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
