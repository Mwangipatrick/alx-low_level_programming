#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator-  executes a function given as a parameter on each element
 * @array: the function executes the array
 * @size:size of the array
 * @action:is a pointer to the function
 * Return: 0 (success)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (b = 0 ; b < size; b++)
	{
		action(array[b]);
	}
}
