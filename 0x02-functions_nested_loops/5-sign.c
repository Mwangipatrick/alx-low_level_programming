#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: a number to be checked
 * Return: 1 for positive number -1 for negative number and 0 any other number
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(3);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}

