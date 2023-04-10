#include "main.h"

/**
 * _strcpy - Copies the pointed string
 * @dest: The pointer to be pointed to
 * @src: The pointer to copy
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
