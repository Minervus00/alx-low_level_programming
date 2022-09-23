#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; ht->array[i] != NULL; i++)
	{
		if (i != 0)
			printf(", ");
		node = ht->array[i];
		printf("%s: %s", node->key, node->value);
	}
	printf("}\n");
}
