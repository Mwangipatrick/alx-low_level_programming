#include "main.h"

/**
 * get_bit -function that returns the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: index of the bit
 * Return: value of the bit art inex or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
