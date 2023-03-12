#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: argument counter
 * @argv: variable argument, character pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
