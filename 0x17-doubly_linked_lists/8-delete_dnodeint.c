#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node a index of a listint_t list
 * @head: Pointer to pointer of list head
 * @index: Index to be deleted
 *
 * Return: 1 if successful, -1 if fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t = *head, *n = NULL;
	unsigned int i = 0, hit = 0;

	if (head == NULL)
		return (-1);
	while (t && index)
	{
		if (i == (index - 1))
		{
			hit = 1;
			break;
		}
		t = t->next;
		i++;
	}
	if (index == 0 && t)
	{
		*head = t->next;
		free(t);
		return (1);
	}
	else if (hit == 1 && t)
	{
		n = t->next;
		t->next = n->next;
		free(n);
		return (1);
	}
	return (-1);
}
