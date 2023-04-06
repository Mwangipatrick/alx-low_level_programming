#include "main.h"

/**
 * _pow_recursion - prints a value after power
 * @x: powered to another
 * @y: powered to x
 * Return: 0 successs
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}

