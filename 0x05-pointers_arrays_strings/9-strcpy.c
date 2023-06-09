#include "main.h"

/**
 * _strcpy - copies the string pointed , including the terminating null byte
 * @dest: This is destiny
 * @src: These are the copies
 *
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
