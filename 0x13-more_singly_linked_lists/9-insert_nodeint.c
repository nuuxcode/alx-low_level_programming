#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: a
 * @idx: a
 * @n: a
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nav, *new, *before;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	nav = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (nav)
	{
		if (i == idx - 1)
		{
			before = nav;
		}
		if (idx == 0)
		{
			new->next = nav;
			*head = new;
			return (new);
		}
		if (i == idx)
		{
			new->next = nav;
			before->next = new;
			return (new);
		}
		if (!nav->next && i + 1 == idx)
		{
			new->next = NULL;
			nav->next = new;
			return (new);
		}
		nav = nav->next;
		i++;
	}

	return (NULL);
}
