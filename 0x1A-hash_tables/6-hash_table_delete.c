#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: Hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current, *tmp;

	if (!ht)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (!ht->array[i]->next)
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
			}
			else
			{
				current = ht->array[i];
				while (current)
				{
					tmp = current->next;
					free(current->key);
					free(current->value);
					free(current);
					current = tmp;
				}
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
