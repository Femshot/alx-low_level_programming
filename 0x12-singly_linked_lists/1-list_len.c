#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list_t
 * list.
 * @h: Pointer to list_t list
 *
 * Return: Number of elements found
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
