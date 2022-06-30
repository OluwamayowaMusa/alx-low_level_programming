#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL, *temp = NULL, *temp1 = NULL;
	unsigned long int index, size;

	if (ht == NULL)
		return;
	size = ht->size;
	printf("{");
	for (index = 0; index < size; index++)
	{
		node = (ht->array)[index];
		if (node != NULL)
			temp1 = node;
	}
	for (index = 0; index < size; index++)
	{
		node = (ht->array)[index];
		while (temp != NULL)
		{
			printf("'%s': '%s', ", temp->key, temp->value);
			temp = temp->next;
		}
		if (node != NULL)
		{
			temp = node;
			if (strcmp(temp->key, temp1->key) == 0)
				temp = NULL;
		}
	}
	if (temp1 != NULL)
		printf("'%s': '%s'", temp1->key, temp1->value);
	printf("}\n");
}
