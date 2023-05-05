#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * @n: first unsigned integer
 * @m: second unsigned integer
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
		if (diff & 1)
			num_bits++;
		diff >>= 1;
	}

	return (num_bits);
}
