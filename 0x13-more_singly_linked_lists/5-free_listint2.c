#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: a
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *nav, *nav2;

	if (head == NULL || *head == NULL)
		return;
	nav = *head;
	while (nav)
	{
		nav2 = nav->next;
		free(nav);
		nav = nav2;
	}
	*head = NULL;
}
