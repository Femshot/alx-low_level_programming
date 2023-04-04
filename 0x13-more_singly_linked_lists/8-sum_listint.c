#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data(n) of a listint_t linked list
 * @head: Pointer to begining of the list
 *
 * Return: Sum computed foe available data.
 */
int sum_listint(listint_t *head)
{
	listint_t *h = head;
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
