#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n)
 * @head: head of double list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int i, sum = 0;

	for (i = 0; current; i++)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
