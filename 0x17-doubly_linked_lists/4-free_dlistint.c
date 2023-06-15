#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t
 * @head: head of double list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = head->next;
		free(head);
	}
}
