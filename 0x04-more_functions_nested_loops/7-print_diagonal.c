#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line
 * @n: rep number of time a character \ should be printed
 * Description: only use _putchar to print
 * Return: diagnonal line
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
