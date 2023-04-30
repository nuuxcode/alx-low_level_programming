#include "lists.h"

/**
 * free_listint - check the code
 * @head: a
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *nav = head, *nav2;

	while (nav)
	{
		nav2 = nav->next;
		free(nav);
		nav = nav2;
	}
}
