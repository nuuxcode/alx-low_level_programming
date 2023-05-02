#include "lists.h"

/**
 * pop_listint - check the code
 * @head: a
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nav = head;
	unsigned int i = 0;

	while (i <= index)
	{
		if (i == index)
		{
			return (nav);
		}
		nav = nav->next;
		i++;
	}

	return (NULL);
}
