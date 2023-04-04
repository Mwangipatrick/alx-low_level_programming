#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -print the sum of the 2 diagonals of a square matrix
 * @a:pointer to the matrix (represented as a 1D array)
 * @size:size of array of array
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int h;
	int sum1 = 0;
	int sum2 = 0;

	for (h = 0; h < size; h++)
	{
		sum1 += a[h * size + h];
		
		sum2 += a[(h + 1) * (size - 1)];
		
	}
	printf("%d, %d\n", sum1, sum2);
}
