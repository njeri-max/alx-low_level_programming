#include "main.h"
/**
 * main - print '_putchar' followed by a new line
 * _putchar function prints alphabet putchar
 * Return: 0 upon success
 */

int main(void)
{
	char d[] = "_putchar";
	int j;

	for (j = 0; j < 8; j++)
	{
		_putchar(d[j]);
	}
	_putchar('\n');
	return (0);
}
