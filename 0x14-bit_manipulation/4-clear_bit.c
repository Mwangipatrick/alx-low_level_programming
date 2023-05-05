#include "main.h"

/**
 * clear_bit -function that sets the value of a bit to 0 at a given index.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit to clear.
 * Return: 1 or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1ul << index);

	return (1);
}
