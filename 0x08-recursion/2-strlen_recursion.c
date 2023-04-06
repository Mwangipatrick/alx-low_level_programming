#include "main.h"

/**
 * _strlen_recursion - function that prints length of a string
 * @s: prints string
 * Return : 0 (success)
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
