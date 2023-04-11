#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of characters 
 * @intsize : size of the characters
 * @c : character
 * Return: null if size 0 ,else a pointer of arrays
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
