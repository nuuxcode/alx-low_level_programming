#include "lists.h"
#include <stdio.h>
/**
 * add_node - check the code
 * @head: a
 * @str: a
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[count])
		count++;
	new->len = count;
	new->next = *head;
	*head = new;
	return (new);
}
