#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Adress of the pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *tofree, *nex;

	if (!(*head) || !head)
		return;
	tofree = *head;
	while (tofree)
	{
		nex = tofree->next;
		free(tofree);
		tofree = nex;
	}
	*head = NULL;
}
