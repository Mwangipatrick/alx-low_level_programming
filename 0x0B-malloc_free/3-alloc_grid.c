#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width:the width
 * @height:the height 
 * Return:the 2d array
 */
int **alloc_grid(int width, int height)
{
	int h;
	int w;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ptr[h] = (int *)malloc(sizeof(int) * width);
		if (ptr[h] == NULL)
		{
			for (w = 0; w < h; w++)
			{
				free(ptr[w]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
		}
	}
	return (ptr);
}
