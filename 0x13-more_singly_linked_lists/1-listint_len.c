#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elements in a list
 * @h : const listnt_t Pointer
 * Return: Always 0
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}