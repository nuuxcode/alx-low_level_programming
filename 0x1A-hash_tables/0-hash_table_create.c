#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_node_t));
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	return (table);
}
