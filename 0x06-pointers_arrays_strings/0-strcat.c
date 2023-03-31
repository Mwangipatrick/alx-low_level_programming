#include "main.h"

/**
 *_strncat - concatenates two strings
 * @dest: input value i
 * @src: input value c
 * Return: to resulting string 'dest'
*/
char *_strncat(char *dest, char *src);
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
