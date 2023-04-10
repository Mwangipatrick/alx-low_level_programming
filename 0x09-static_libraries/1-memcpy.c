#include "main.h"
/**
 * _memcpy - fills memory 
 * @dest: source string to be copied too
 * @src: string to be copied from
 * @n: length of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
