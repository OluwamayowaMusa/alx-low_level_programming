#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: Unique Key
 * @value: Value associated with the key
 *
 * Return: 1 - if succeeded
 *         0 - otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_node = NULL, *temp = NULL;
	unsigned long int index;

	if (key == NULL || ht == NULL || strlen(key) == 0)
		return (0);
	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
		return (0);
	new_hash_node->key = (char *)key;
	new_hash_node->value = strdup(value);
	new_hash_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_hash_node;
	}
	else
	{
		temp = (ht->array)[index];
		new_hash_node->next = temp;
		(ht->array)[index] = new_hash_node;
	}
	return (1);
}
