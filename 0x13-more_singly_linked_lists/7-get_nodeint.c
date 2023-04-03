#include "lists.h"

/**
 * get_nodeint_at_index - Locates the nth node of a listint_t linked list
 * @head: Head node of list
 * @index: Index of node to be found
 *
 * Return: Pointer to nth node if found, NULL if fail
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a;
	unsigned int i = 0;

	a = head;
	while (a)
	{
		if (i == index)
			break;
		a = a->next;
		i++;
	}
	return (a);
}
