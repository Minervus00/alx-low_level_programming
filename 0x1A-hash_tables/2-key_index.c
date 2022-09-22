#include "hash_tables.h"

/**
 * key_index - give the index of the key in the array
 * @key: the key
 * @size: hash table's array size
 * Return: index at which the key/value pair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2_value = hash_djb2(key);

	return (djb2_value % size);
}
