#include "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list
 * @head: Pointer to beginning of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
