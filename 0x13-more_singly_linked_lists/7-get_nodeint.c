#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: a
 * @index: a
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nav;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	nav = head;
	while (nav)
	{
		if (i == index)
			return (nav);
		nav = nav->next;
		i++;
	}

	return (NULL);
}
