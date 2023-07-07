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
	hash_node_t *new_node, *head = NULL;
	unsigned long int index = 0;

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if(!new_node)
		return (0);
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	new_node->next = head;
	head = new_node;

	ht->array[index] = head;

	return (1);
}
