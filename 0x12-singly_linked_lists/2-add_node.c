#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a list_t list.
 * @head: Pointer to Pointer of head of list_t.
 * @str: Pointer to a new string.
 *
 * Return: Pointer to address of new node, NULL if fail.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	while (*(str + len))
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
