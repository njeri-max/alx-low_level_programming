#include "main.h"
/**
 * print_alphabet - prints from a-z, lowercase
 * only use _putchar twice
 * return 0 on success
 */

void print_alphabet(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		_putchar(e);
	}
	_putchar('\n');

}
