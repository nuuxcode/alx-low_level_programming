#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: a
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *nav;

	while (*head != NULL)
	{
		nav = *head;
		*head = (*head)->next;
		free(nav);
	}

	*head = NULL;
}
