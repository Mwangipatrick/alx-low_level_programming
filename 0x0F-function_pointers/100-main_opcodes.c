#include "function_pointers.h"
/**
 * main -  a program that prints the opcodes of its own main function.
 * @argc: arguments number
 * @argv: arguments array
 * Return: 0 for (Success)
 */
int main(int argc, char *argv[])
{
	char *arr;
	int p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (p = 0; p < bytes; p++)
	{
		if p == bytes - 1)
		{
			printf("%02hhx\n", arr[p]);
			break;
		}
		printf("%02hhx ", arr[p]);
	}
	return (0);
}
