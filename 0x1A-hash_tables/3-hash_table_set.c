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

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
		return (0);
	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);
	new_hash_node->next = NULL;
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_hash_node;
	}
	else
	{
		temp = (ht->array)[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				free(new_hash_node->key);
				free(new_hash_node->value);
				free(new_hash_node);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		temp = (ht->array)[index];
		new_hash_node->next = temp;
		(ht->array)[index] = new_hash_node;
	}
	return (1);
}
