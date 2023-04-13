#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strdup - Function that returns a pointer to a newly allocated space
 * @str: the string
 * @malloc -the memory
 * Return: null if str is null and pointer if success
 */
char *_strdup(char *str)
{
	int len;
	char *ptr;
	int h;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	ptr = (char *)malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	h = 0;
	while (h < len)
	{
		ptr[h] = str[h];
		h++;
	}
	ptr[len] = '\0';
	return (ptr);
}
