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

	htable = malloc(sizeof(hash_table_t) * size);
	return (htable);
}
