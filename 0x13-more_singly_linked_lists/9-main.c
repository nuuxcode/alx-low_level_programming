#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 0, 00);
    insert_nodeint_at_index(&head, 1, 11);
    insert_nodeint_at_index(&head, 2, 22);
    insert_nodeint_at_index(&head, 3, 33);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
/*
Write a function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL


julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j
julien@ubuntu:~/0x13. More singly linked lists$ ./j
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/0x13. More singly linked lists$
in case add last one
in case add wrong index

*/
