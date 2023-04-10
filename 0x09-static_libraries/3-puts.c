#include "main.h"
/**
 * _puts - a new line followes a printed string, to stdout
 * @str: an input string
 *
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
