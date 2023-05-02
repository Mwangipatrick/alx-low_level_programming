#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *reverse_listint - a function that reverses a listint_t linked list
 *@head : pointer adresss to a listin_t head
 *Return:  a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	if (*head == NULL)
	{
		return (NULL);
	}

	prevnode = 0;
	nextnode = *head;
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
