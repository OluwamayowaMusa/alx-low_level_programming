#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table
 * @key: Unique Key
 *
 * Return: Value associated with the element or NULL if Key not found
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];
	if (node != NULL)
		return (node->value);
	return (NULL);
}
