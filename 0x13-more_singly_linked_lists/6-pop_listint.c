#include "lists.h"

/**
 * pop_listint - check the code
 * @head: a
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{

	int data = (*head)->n;

	*head = (*head)->next;

	return (data);
}
