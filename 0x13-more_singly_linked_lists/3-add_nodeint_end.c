#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: a
 * @n: a
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *nav = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!nav)
		*head = new;
	else
	{
		while (nav->next)
			nav = nav->next;
		nav->next = new;
	}
	return (new);
}
