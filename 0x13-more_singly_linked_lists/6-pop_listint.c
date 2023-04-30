#include "lists.h"

/**
 * pop_listint - check the code
 * @head: a
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data = (*head)->n;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
