#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1:the first string
 * @s2:the second string
 * @n:number of bytes of s2 to be concentrated into s1
 * Return:NULL if it fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len_s1, len_s2, v, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = 0;
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	len_s2 = 0;
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	if (n >= len_s2)
	{
		n = len_s2;
	}
	ptr = (char *)malloc(sizeof(char) * (len_s1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; i < len_s1; i++)
	{
		ptr[i] = s1[i];
	}
	for (v = 0; v < n; v++)
	{
		ptr[i + v] = s2[v];
	}
	ptr[len_s1 + n] = '\0';
	return (ptr);
}
