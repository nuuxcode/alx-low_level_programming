#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int index = 0;
	int ret = -1;
	ht = hash_table_create(1024);

	index = key_index((unsigned char *)"hetairas", ht->size);

	printf("%p\n", (void *)ht->array[index]);

	ret = hash_table_set(ht, "hetairas", "a");

	printf("%p\n", (void *)ht->array[index]);
	if (ht->array[index])
		printf("index:%d - return:%d - key:%s - value:%s - next:%p\n", index, ret, ht->array[index]->key, ht->array[index]->value, (void *)ht->array[index]->next);

	printf("----\n");

	index = key_index((unsigned char *)"mentioner", ht->size);

	printf("%p\n", (void *)ht->array[index]);
	if (ht->array[index])
		printf("index:%d - return:%d - key:%s - value:%s - next:%p\n", index, ret, ht->array[index]->key, ht->array[index]->value, (void *)ht->array[index]->next);

	ret = hash_table_set(ht, "mentioner", "a");

	printf("%p\n", (void *)ht->array[index]);
	if (ht->array[index])
		printf("index:%d - return:%d - key:%s - value:%s - next:%p\n", index, ret, ht->array[index]->key, ht->array[index]->value, (void *)ht->array[index]->next);

	printf("----\n");

	index = key_index((unsigned char *)"mentioner", ht->size);

	printf("%p\n", (void *)ht->array[index]);
	if (ht->array[index])
		printf("index:%d - return:%d - key:%s - value:%s - next:%p\n", index, ret, ht->array[index]->key, ht->array[index]->value, (void *)ht->array[index]->next);

	ret = hash_table_set(ht, "mentioner", "ax");

	printf("%p\n", (void *)ht->array[index]);
	if (ht->array[index])
		printf("index:%d - return:%d - key:%s - value:%s - next:%p\n", index, ret, ht->array[index]->key, ht->array[index]->value, (void *)ht->array[index]->next);

	printf("----\n");

	return (EXIT_SUCCESS);
}
