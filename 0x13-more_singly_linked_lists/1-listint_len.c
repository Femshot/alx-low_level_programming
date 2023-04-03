#include "lists.h"

/**
 * listint_len - Prints all the elements of a listint_t list.
 * @h: Pointer to list.
 *
 * Return: Size of elements in list.
 */
size_t listint_len(const listint_t *h)
{
	size_t  i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
