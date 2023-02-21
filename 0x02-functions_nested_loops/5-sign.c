#include "main.h"
/**
 * print_sign - determines state of integer
 * @n: is the integer to be checked
 * Return: 1 if positive, 0 if zero, -1 if not an integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
