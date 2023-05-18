#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: Pointer to start  of list
 *
 * Return: Number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
