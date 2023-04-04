#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copies from src
 * @src: copies to dest
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}

