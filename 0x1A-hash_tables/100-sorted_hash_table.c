#include "hash_tables.h"

/**
 * shash_table_create - Creat a Sorted hash table data structure
 * @size: Size of hash table
 *
 * Return: Pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_shash_table = NULL;
	unsigned long int index;

	new_shash_table = malloc(sizeof(shash_table_t));
	if (new_shash_table == NULL)
		return (NULL);
	new_shash_table->size = size;
	new_shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_shash_table->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		(new_shash_table->array)[index] = NULL;
	new_shash_table->shead = NULL;
	new_shash_table->stail = NULL;
	return (new_shash_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: Sorted hash table
 * @key: Unique Key
 * @value: Value corresponding to key
 *
 * Return: 1 - if succeeded
 *         0 - otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_shash_node = NULL, *temp = NULL, *head_node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);
	new_shash_node = malloc(sizeof(shash_node_t));
	if (new_shash_node == NULL)
		return (0);
	new_shash_node->key = strdup(key);
	new_shash_node->value = strdup(value);
	new_shash_node->sprev = NULL;
	new_shash_node->snext = NULL;
	new_shash_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_shash_node;
		if (ht->shead == NULL && ht->stail == NULL)
		{
			ht->shead = new_shash_node;
			ht->stail = NULL;
			return (1);
		}
	}
	else
	{
		temp = (ht->array)[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(new_shash_node->value);
				free(new_shash_node->key);
				free(new_shash_node);
				new_shash_node = NULL;
				temp->value = strdup(value);
				new_shash_node = temp;
				return (1);
			}
			temp = temp->next;
		}
		temp = (ht->array)[index];
		new_shash_node->next = temp;
		(ht->array)[index] = new_shash_node;

	}
	head_node = ht->shead;
	if (*(new_shash_node->key) < *(head_node->key))
	{
		new_shash_node->sprev = NULL;
		new_shash_node->snext = head_node;
		head_node->sprev = new_shash_node;
		ht->shead = new_shash_node;
	}
	else
	{
		while (head_node != NULL && *(head_node->key) < *(new_shash_node->key))
		{
			temp = head_node;
			head_node = head_node->snext;
		}
		temp->snext = new_shash_node;
		new_shash_node->sprev = temp;
		new_shash_node->snext = head_node;
		if (head_node != NULL)
			head_node->sprev = new_shash_node;
	}
	head_node = ht->shead;
	while (head_node->snext != NULL)
		head_node = head_node->snext;
	ht->stail = head_node;
	return (1);
}


/**
 * shash_table_print - Print hash table using the sorted linked list
 * @ht: Hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head_node = NULL;

	if (ht == NULL)
		return;
	head_node = ht->shead;
	printf("{");
	while (head_node != NULL && head_node->snext != NULL)
	{
		printf("'%s': '%s', ", head_node->key, head_node->value);
		head_node = head_node->snext;
	}
	if (head_node != NULL)
		printf("'%s': '%s'}\n", head_node->key, head_node->value);
}


/**
 * shash_table_get - Get the value corresponding to the key
 * @ht: Hash table
 * @key: Unique key passed
 *
 * Return: Value corresponding to key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head_node = NULL;

	if (key == NULL || ht == NULL)
		return (NULL);
	head_node = ht->shead;
	while (head_node != NULL)
	{
		if (strcmp(head_node->key, key) == 0)
			return (head_node->value);
		head_node = head_node->snext;
	}
	return (NULL);
}


/**
 * shash_table_print_rev - Print the key value pairs in reverse order
 * @ht: Hash Table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail_node = NULL;

	if (ht == NULL)
		return;
	tail_node = ht->stail;
	printf("{");
	while (tail_node != NULL && tail_node->sprev != NULL)
	{
		printf("'%s': '%s', ", tail_node->key, tail_node->value);
		tail_node = tail_node->sprev;
	}
	if (tail_node != NULL)
		printf("'%s': '%s'}\n", tail_node->key, tail_node->value);
}


/**
 * shash_table_delete - Delete hash table
 * @ht: hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head_node = NULL, *current = NULL;

	if (ht == NULL)
		return;
	head_node = ht->shead;
	while (head_node != NULL)
	{
		current = head_node->snext;
		free(head_node->key);
		free(head_node->value);
		free(head_node);
		head_node = current;
	}
	free(ht->array);
	free(ht);
}
