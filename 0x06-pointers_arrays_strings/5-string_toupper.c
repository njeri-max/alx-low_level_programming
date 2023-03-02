#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @n: represents string
 * Return: 0
 */
char *string_toupper(char *n)
{
	int j;

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] >= 97 && n[j] <= 122)
		{
			n[j] -= 32;
		}
	}
	return (n);
}
