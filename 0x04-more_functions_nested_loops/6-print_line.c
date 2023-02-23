#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times '_' is printed
 * Description: only use  _putchar to print
 * Return a straight line ending with \n
 */
void print_line(int n)
{
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 1; z <= n; z++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
