#include "lists.h"

/**
 * add_nodeint -Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to Pointer of head of listint_t list.
 * @n: Value to store in new node.
 *
 * Return: Pointer to new node created.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
