#include "main.h"

/**
 * main - prints all arg received
 * @argc: argument count
 * @argv: variable argument, pointer2pointer char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}

