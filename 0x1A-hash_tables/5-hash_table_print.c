#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: Hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 0;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] && flag)
		{
			printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
		else if (ht->array[i] && !flag)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
