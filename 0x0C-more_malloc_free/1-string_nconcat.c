#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1:the first string newly allocated memory
 * @s2:the second string null terminated
 * @n:number of bytes of s2 to be concentrated into s1
 * Return:NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int w, x, y, z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	w = 0;
	while (s1[w] != '\0')
	{
		w++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		x++;
	}
	if (n >= x)
	{
		n = x;
	}
	ptr = (char *)malloc(sizeof(char) * (w + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < w; y++)
	{
		ptr[y] = s1[y];
	}
	for (z = 0; z < n; z++)
	{
		ptr[y + x] = s2{z];
	}
	ptr[len_s1 + n] = '\0';
	return (ptr);
}
