#include "main.h"

/**
 *  _isupper - checks for uppercase character
 *  @c: number to be checked
 *  Return: 1 if number c  is uppercase 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
