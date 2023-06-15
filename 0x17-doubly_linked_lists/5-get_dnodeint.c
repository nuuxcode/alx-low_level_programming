#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at index
 * @head: head of double list
 * @index: index of the node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
