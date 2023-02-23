#include "main.h"
/**
 * void print_line - function that draws a straight line in the terminal
 * @n: the number of times '_' is printed
 * Description: only use  _putchar to print
 * Return a straight line ending with \n
 */
void print_line(int n)
{
	int z;

	z = 0;
	while (z < n)
	{
		_putchar('_');

		z++;
	}
	_putchar('\n');
}
