#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: Pointer to start of list_t
 */
void free_list(list_t *head)
{
	list_t  *gone = NULL;

	while (head != NULL)
	{
		gone = head;
		if (head->str != NULL)
			free(head->str);
		head = head->next;
		free(gone);
	}
	/*free(head);*/
}
