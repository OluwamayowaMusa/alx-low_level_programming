#include "hash_tables.h"

/**
 * main - Test function
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);
	shash_table_set(ht, "USA", "Washington");
	shash_table_set(ht, "France", "Paris");
	shash_table_set(ht, "UK", "London");
	shash_table_set(ht, "Spain", "Madrid");
	shash_table_set(ht, "Germany", "Berlin");
	shash_table_set(ht, "China", "Beijing");
	shash_table_set(ht, "Russia", "Moscow");
	shash_table_set(ht, "Bahrain", "Manama");
	shash_table_set(ht, "Canada", "Ottawa");
	shash_table_set(ht, "Brazil", "Brasilia");
	shash_table_set(ht, "Sweden", "Stockholm");
	shash_table_set(ht, "Iceland", "Reykjavik");
	shash_table_set(ht, "Japan", "Tokyo");
	shash_table_set(ht, "Australia", "Canberra");
	shash_table_print(ht);
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
