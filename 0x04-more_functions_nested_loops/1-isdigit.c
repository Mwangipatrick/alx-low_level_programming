#include "main.h"

/**
 *_isdigit - check whether the character is a number
 *@c:  check the number
 *Return: 1 if c is a digit 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}
