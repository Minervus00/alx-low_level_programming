#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: (hash_table_t*) a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	hash_node_t **arr;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);
	htable->size = size;
	htable->array = arr;
	for (i = 0; i < size; i++)
		htable->array = NULL;

	return (htable);
}
