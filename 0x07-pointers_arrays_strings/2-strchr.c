#include "main.h"

/**
 * _strchr -function locate character in a string
 * @s: returns pointer to the first occurrence in string s
 * @c: returns pointer to first occurrence c
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
