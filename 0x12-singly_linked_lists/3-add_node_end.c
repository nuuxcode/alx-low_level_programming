#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - check the code
 * @head: a
 * @str: a
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;
	list_t *nav = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[count])
		count++;
	new->len = count;
	new->next = NULL;

	if (nav == NULL)
		*head = new;
	else
	{
		while (nav->next != NULL)
			nav = nav->next;
		nav->next = new;
	}
	return (new);
}
