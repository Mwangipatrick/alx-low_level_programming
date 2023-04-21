#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name- function that prints a name
 *@name: name to be printed
 **f: function pointer
 *Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	char *name
		printf("enter name: ");
	scanf("%s\n", name);
	printf("The user entered %s\n", name);
}
