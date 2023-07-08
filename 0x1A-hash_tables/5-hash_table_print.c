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
	hash_node_t *current;

	printf("{");
	while (i < ht->size && ht)
	{
		if (ht->array[i] && flag)
		{
			if (!ht->array[i]->next)
				printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			else
			{
				current = ht->array[i];
				while (current)
				{
					printf(", '%s': '%s'", current->key, current->value);
					current = current->next;
				}
			}
		}
		else if (ht->array[i] && !flag)
		{
			if (!ht->array[i]->next)
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			else
			{
				current = ht->array[i];
				while (current)
				{
					if (flag)
						printf(", '%s': '%s'", current->key, current->value);
					else
					{
						printf("'%s': '%s'", current->key, current->value);
						flag = 1;
					}
					current = current->next;
				}
			}
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
