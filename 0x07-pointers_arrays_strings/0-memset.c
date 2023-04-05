#include "main.h"

/**
 **_memset - fills the memory with a constant byte
 * @s: memory area pointed
 * @b: constant byte
 * @n: function fills the first byte
 * Return: pointer to memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}
	return (s);
}

