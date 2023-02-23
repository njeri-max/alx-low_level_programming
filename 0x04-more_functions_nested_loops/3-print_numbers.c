#include "main.h"
/**
 * print_numbers - function that prints numbers (0-9)
 * Description: only use _putchar twice
 * Return: numbers (0 through nine), followed by new line
 */
void print_numbers(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		_putchar(j + '0');
		j++;
	}
	_putchar('\n');
}
