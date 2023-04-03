#include "lists.h"

/**
 * add_nodeint_end - Adds anew node at the end of a listint_t list
 * @head: Pointer to pointer of list head.
 * @n: Value of data to be stored.
 *
 * Return: Address of new element created.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *temp;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
	}
	return (new);
}
