#include "lists.h"
/**
 * list_len - a function returns the number of elements in a linked list_t list
 * @h: a pointer pointing the lists
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count;

	while (h)
	{
		count++;
		h = h->next;
	}


	return (count);
}

