#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: The size of hash table.
 *
 * Return: Pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a = 0;
	hash_table_t *table = NULL;

	table = malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (; a < size; a++)
		(table->array)[a] = NULL;
	return (table);
}
