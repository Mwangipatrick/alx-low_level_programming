#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_list - frees the node list
* @head: A pointer to the first node of the list to free
*/
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
