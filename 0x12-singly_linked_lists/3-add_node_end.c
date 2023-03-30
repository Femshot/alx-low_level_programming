#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: Pointer to Pointer of head of list_t.
 * @str: Pointer to a new string.
 *
 * Return: Pointer to address of new node, NULL if fail.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new, *to_end;

	while (*(str + len))
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	to_end = *head;
	while (to_end->next != NULL)
		to_end = to_end->next;
	new->next = to_end->next;
	to_end->next = new;
	return (new);
}
