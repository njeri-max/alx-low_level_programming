#include "main.h"
/**
 * print_square - function that prints a square
 * @size: is the size of the sqaure
 * Description: only use _putchar to print. using # to print square
 * Return: square composed of #
 */
void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
