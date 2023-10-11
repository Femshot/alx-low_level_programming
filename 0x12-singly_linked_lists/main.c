#include "lists.h"


int main(void)
{
    list_t *head;

    head = NULL;
	add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
	free_list(head);
	printf("---------------------------------------------------------\n");
    head = NULL;
	add_node_end(&head, "Alexandro");
    add_node_end(&head, "Asaia");
    add_node_end(&head, "Augustin");
    add_node_end(&head, "Bennett");
    add_node_end(&head, "Bilal");
    add_node_end(&head, "Chandler");
    add_node_end(&head, "Damian");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Dora");
    add_node_end(&head, "Electra");
    add_node_end(&head, "Gloria");
    add_node_end(&head, "Joe");
    add_node_end(&head, "John");
    add_node_end(&head, "John");
    add_node_end(&head, "Josquin");
    add_node_end(&head, "Kris");
    add_node_end(&head, "Marine");
    add_node_end(&head, "Mason");
    add_node_end(&head, "Praylin");
    add_node_end(&head, "Rick");
    add_node_end(&head, "Rick");
    add_node_end(&head, "Rona");
    add_node_end(&head, "Siphan");
    add_node_end(&head, "Sravanthi");
    add_node_end(&head, "Steven");
    add_node_end(&head, "Tasneem");
    add_node_end(&head, "William");
    add_node_end(&head, "Zee");
    print_list(head);
	free_list(head);
	head = NULL;
	free_list(head);
    return (0);
}
