#include "main.h"

/**
 * factorial- returns the factoril of a given number
 * @n: prints else error
 * Return: 0 sucess
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
