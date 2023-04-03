#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: Pointer to beginning of list
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
