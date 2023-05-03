#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: a
 * @index: a
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nav, *before, *deleted;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	nav = *head;
	if (index == 0)
	{
		*head = nav->next;
		free(nav);
		return (1);
	}
	while (nav)
	{
		if (i == index)
			deleted = nav;
		if (i == index - 1)
			before = nav;
		if (i == index + 1)
		{
			before->next = nav;
			free(deleted);
			return (1);
		}
		if (nav->next == NULL && i == index)
		{
			before->next = NULL;
			free(nav);
			return (1);
		}
		nav = nav->next;
		i++;
	}
	return (-1);
}
