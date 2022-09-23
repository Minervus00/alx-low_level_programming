#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size, num = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (num)
				printf(", ");
			
			printf("'%s': '%s'", node->key, node->value);
			num++;
			node = node->next;
		}
	}
	printf("}\n");
}
