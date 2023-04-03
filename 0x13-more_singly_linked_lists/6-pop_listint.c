#include "lists.h"

/**
 * pop_listint - Deletes the head nodeof a listint_t list
 * @head: Pointer to pointer of head of list
 *
 * Return: Head node's stored data
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int i = 0;

	if (head != NULL && *head != NULL)
	{
		h = *head;
		i = h->n;
		*head = h->next;
		free(h);
	}
	return (i);
}
