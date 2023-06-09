#include "hash_tables.h"

/**
 * key_index - Function that returns the normalized index for a key.
 * @key: The key to get/set in the hash table.
 * @size: the size of the hash table.
 *
 * Return: Index of hash table created.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	idx = hash_djb2((unsigned char *)key);
	return (idx % size);
}
