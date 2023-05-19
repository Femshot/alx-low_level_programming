#include "lists.h"

/**
 * add_dnodeint - Adds new node at the end of a doubly linked list
 * @head: Pointer to start of list
 * @n: Value to store
 *
 * Return: Address of new node or Null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
