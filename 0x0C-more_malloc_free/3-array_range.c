#include"main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min:minimun values of array
 * @max:maximum values of array
 * Return:a pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int p;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *)malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < size; p++)
	{
		ptr[p] = min + p;
	}
	return (ptr);
}
