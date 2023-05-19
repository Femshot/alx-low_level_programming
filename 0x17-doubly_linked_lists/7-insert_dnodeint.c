#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to pointer of list head
 * @idx: Index where node is to be inserted
 * @n: Data to be inserted at new node
 *
 * Return: Pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *p = *h;
	unsigned int i = 0, hit = 0;

	while (p && idx)
	{
		if (i == (idx - 1))
		{
			hit = 1;
			break;
		}
		p = p->next;
		i++;
	}
	if (idx == 0)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = p;
		*h = new;
	}
	else if (hit == 1)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = p->next;
		p->next = new;
	}
	return (new);
}
