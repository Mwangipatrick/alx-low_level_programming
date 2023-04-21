#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_numbers - a function that prints numbers, followed by a new line
  *@separator: separates between numbers.
  *@n: number of arguments
  *Return: void.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
