#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: Hash table
 * @key: The key
 * Return: the value associated with the element,
 *  or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index = 0;

	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strncmp(key, current->key, strlen(current->key) + 1) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
