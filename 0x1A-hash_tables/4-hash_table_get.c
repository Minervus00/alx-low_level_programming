#include "hash_tables.h"
#include <stddef.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: the value, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	if (node == NULL)
		return (NULL);
	return (node->value);
}
