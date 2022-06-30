#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table
 * @ht: Hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *current = NULL;
	unsigned long int index, size;

	if (ht == NULL)
		return;

	size = ht->size;
	for (index = 0; index < size; index++)
	{
		node = (ht->array)[index];
		if (node != NULL)
		{
			while (node != NULL)
			{
				current = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = current;
			}
		}
	}
	free(ht->array);
	free(ht);
}
