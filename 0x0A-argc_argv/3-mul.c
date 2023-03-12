#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: variable argument
 * Return: 1 if, 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
