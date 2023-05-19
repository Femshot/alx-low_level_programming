#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: Pointer to pointer of beginning of list
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *t;

	if (head == NULL)
		return;
	t = *head;
	while (t)
	{
		h = t;
		t = t->next;
		free(h);
	}
	*head = NULL;
}

int main(void)
{
	free_listint2(NULL);
	printf("Freed !\n");
	return (0);
}
