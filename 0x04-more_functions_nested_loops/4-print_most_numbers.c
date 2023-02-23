#include "main.h"
/**
 * print_most_numbers - prints numbers 0 through 9
 * Description: only use _putchar twice
 * Return: numbers from 0-9 without 2 and 4
 */
void print_most_numbers(void)
{
	int k;

	k = 0;
	while (k < 10)
	{
		if ((k != 2) && (k != 4))
			_putchar(k + '0');

		k++;
	}
	_putchar('\n');
}
