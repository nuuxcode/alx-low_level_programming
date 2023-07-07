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
	hash_node_t *new_node;
	unsigned long int index = 0;

	if (!ht || !key || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = malloc(strlen(key) + 1);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = malloc(strlen(value) + 1);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	if (ht->array[index])
		new_node->next = ht->array[index];
	else
		new_node->next = NULL;
	ht->array[index] = new_node;

	return (1);
}
