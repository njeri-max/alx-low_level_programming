#include "main.h"
/**
 * puts2 - prints characters of a string strating with first char
 * @str: defines the character array type
 * Description: in order of 1st, 3rd, 5th ...
 */
void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	putchar('\n');
}
