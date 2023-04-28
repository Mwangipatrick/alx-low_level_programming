#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head:adress of the element
 * @str:string pointer
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
