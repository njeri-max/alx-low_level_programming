#include "main.h"
/**
  * print_alphabet_x10 - Repeats letters
  * returns nothing
  */
void print_alphabet_x10(void)
{
	int j;
	char e;

	for (j = 0; j < 10; ++j)
	{
		for (e = 'a'; e <= 'z'; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}
