#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash_table
 * @key: the key
 * @value: associated to the key
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	char *val;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/*key cannot be an empty string*/
	if (!strcmp(key, ""))
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			val = tmp->value;
			tmp->value = strdup(value);
			free(val);
			return (1);
		}
		tmp = tmp->next;
	}
	/*The array[idx] is empty or the key is not already stored*/
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
