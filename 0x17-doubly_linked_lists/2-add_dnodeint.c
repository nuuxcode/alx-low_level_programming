#include "lists.h"

/**
 * add_dnodeint -  prints all the elements of a dlistint_t list
 * @head: head of double list
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	else
		new->next = NULL;
	new->prev = NULL;
	*head = new;
	return (new);
}