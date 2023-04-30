#include "lists.h"

/**
 * pop_listint - check the code
 * @head: a
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	data = (*head)->n;
	if (*head == NULL)
		return (0);
	if ((*head)->next != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		free(*head);
	}
	return (data);
}
