#include "hash_tables.h"

/**
 * key_index - Gives the hash code of a key
 * @key: Unique key passed
 * @size: Size of the array of the hash table
 *
 * Return: The index at which the key/value pair will be stored
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int val, hash_code;

	if (key == NULL)
		return (-1);
	val = hash_djb2(key);
	hash_code = val % size;

	return (hash_code);
}
