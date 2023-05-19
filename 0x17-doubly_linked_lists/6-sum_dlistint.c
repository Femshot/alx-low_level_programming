#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data(n) of a doubley linked list
 * @head: Pointer to begining of the list
 *
 * Return: Sum computed foe available data.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
