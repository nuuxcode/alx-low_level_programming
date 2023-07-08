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

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (!ht->array[i]->next)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				flag = 1;
			}
			else
			{
				current = ht->array[i];
				while (current)
				{
					if (flag)
						printf(", ");
					printf("'%s': '%s'", current->key, current->value);
					flag = 1;
					current = current->next;
				}
			}
		}
		i++;
	}
	printf("}\n");
}
