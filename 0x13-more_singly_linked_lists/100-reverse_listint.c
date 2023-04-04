#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t linked list.
 * @head: Pointer to pointer of node head.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = NULL, *t = NULL;

	if (head == NULL)
		return (NULL);
	while (*head)
	{
		h = (*head)->next;
		(*head)->next = t;
		t = *head;
		*head = h;
	}
	*head = t;
	return (*head);
}
