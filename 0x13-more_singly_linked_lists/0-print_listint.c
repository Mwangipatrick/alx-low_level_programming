#include <stdio.h>
#include "lists.h"

/**
 * print_listint- a fncion that prints a listint list
 *@h : header pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *temp;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
