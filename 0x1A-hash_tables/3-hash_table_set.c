#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: Hash table
 * @key: The key
 * @value: The value of the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index = 0;

	if (!ht || !key || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strncmp(key, current->key, strlen(current->key) + 1) == 0)
		{
			strcpy(current->value, value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
