#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function frees in a loop
 * @head: pointer to the head 
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
