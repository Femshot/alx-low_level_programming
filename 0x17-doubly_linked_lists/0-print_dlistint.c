#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to start of list
 *
 * Return: Number of node in list`
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *t = h;
	size_t count = 0;

	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
		count++;
	}
	return (count);
}
