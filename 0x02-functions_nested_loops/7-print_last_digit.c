#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @q: represents the int type
 * Return: value of last digit
 */
int print_last_digit(int q)
{
	int qs;

	if (q < 0)
	{
		qs = -1 * (q % 10);
		_putchar(qs + '0');
		return (qs);
	}
	else
	{
		qs = q % 10;
		_putchar(qs + '0');
		return (qs);
	}
}
