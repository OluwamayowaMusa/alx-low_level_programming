#include "hash_tables.h"

/**
 * main - test function
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	value = hash_table_get(ht, "betty");
	puts(value);
	hash_table_set(ht, "dram", "Hello");
	value = hash_table_get(ht, "dram");
	puts(value);
	hash_table_set(ht, "vivency", "low");
	value = hash_table_get(ht, "vivency");
	puts(value);
	return (EXIT_SUCCESS);
}
