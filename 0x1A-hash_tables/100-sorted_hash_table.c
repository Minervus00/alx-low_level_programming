#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create -  creates a sorted hash table
 * @size: the size of the array
 * Return: (hash_table_t*) a pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(shash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->array = malloc(sizeof(shash_node_t *) * size);
	if (htable->array == NULL)
		return (NULL);
	htable->size = size;
	htable->shead = NULL;
	htable->stail = NULL;
	for (i = 0; i < size; i++)
		htable->array[i] = NULL;

	return (htable);
}

/**
 * add_sht_sorted_list - adds the new node to ht sorted linked list
 * @ht: the sorted hash table
 * @snew: the new node to be inserted
 * Return: nothing
 */
void add_sht_sorted_list(shash_table_t *ht, shash_node_t *snew)
{
	shash_node_t *prev = NULL, *buff;
	int k;

	buff = ht->shead;
	while (buff)
	{
		k = strcmp(snew->key, buff->key);
		if (k < 0)
			break;
		prev = buff;
		buff = buff->snext;
	}

	snew->snext = buff;
	snew->sprev = prev;
	/*snew is the unique node*/
	if (prev == NULL && buff == NULL)
	{
		ht->shead = snew;
		ht->stail = snew;
	}

	/*snew inserted to the middle*/
	else if (prev != NULL && buff != NULL)
	{
		prev->snext = snew;
		buff->sprev = snew;
	}

	/*snew inserted to the top*/
	else if (buff != NULL)
	{
		buff->sprev = snew;
		ht->shead = snew;
	}

	/*snew inserted to the end*/
	else if (prev != NULL)
	{
		prev->snext = snew;
		ht->stail = snew;
	}
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: hash_table
 * @key: the key
 * @value: associated to the key
 * Return: 1 if succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
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
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	add_sht_sorted_list(ht, new);
	return (1);
}

/**
 * shash_table_get - retrieves the key value
 * @ht: hash_table
 * @key: the key
 * @value: associated to the key
 * Return: the key's value or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;

	if (ht == NULL || ht->shead == NULL)
		return (NULL);

	tmp = ht->shead;
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - prints htable using the sorted linked list
 * @ht: hash_table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	int i = 0;
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp)
	{
		if (i > 0)
			printf(", ");
		i++;
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints htable using the sorted linked list
 * @ht: hash_table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{	int i = 0;
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	tmp = ht->stail;
	printf("{");
	while (tmp)
	{
		if (i > 0)
			printf(", ");
		i++;
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head, *tmp;

	if (ht == NULL)
		return;
	head = ht->shead;
	while (head)
	{
		tmp = head;
		head = head->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
