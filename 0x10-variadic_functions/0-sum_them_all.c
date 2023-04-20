#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n:number of parrameters passed
 * @...: sum of all its parameters
 * Return: 0 if n==0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int h;
	int sum = 0;
	va_list arg;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (h = 0; h < n; h++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
