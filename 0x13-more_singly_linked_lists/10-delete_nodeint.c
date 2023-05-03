#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: a
 * @index: a
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nav, *before;
	unsigned int i = 0;

	nav = *head;
	if (!head || !*head)
		return (-1);
	if (index == 0 && nav->next == NULL)
	{
		*head = NULL;
		return (1);
	}
	while (nav)
	{
		if (index == 0 && i == 1)
		{
			*head = nav;
			return (1);
		}
		if (i == index - 1)
		{
			before = nav;
		}
		if (i == index + 1)
		{
			before->next = nav;
			return (1);
		}
		nav = nav->next;
		i++;
	}
	return (-1);
}
