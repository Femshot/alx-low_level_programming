#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to pointer of list head
 * @idx: Index where node is to be inserted
 * @n: Data to be inserted at new node
 *
 * Return: Pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *h = *head;
	unsigned int i = 0, hit = 0;

	while (h && idx)
	{
		if (i == (idx - 1))
		{
			hit = 1;
			break;
		}
		h = h->next;
		i++;
	}
	if (idx == 0)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = h;
		*head = new;
	}
	else if (hit == 1)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = h->next;
		h->next = new;
	}
	return (new);
}
