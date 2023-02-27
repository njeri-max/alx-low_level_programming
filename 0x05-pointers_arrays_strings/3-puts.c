#include "main.h"
/**
 * _puts - prints out a string
 * @str: character array string type pointer
 * description: only use _putchar 
 */
void _puts(char *str)
{

	if (str)
	{
		while (*str)
		{
			_putchar(*str++);
		}
	}

	_putchar('\n');
}
