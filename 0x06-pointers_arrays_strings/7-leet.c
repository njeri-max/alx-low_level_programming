#include "main.h"
/**
 * leet - encodes string to 1337
 * @n: string
 * Return: encoded string 'n'
 */
char *leet(char *n)
{
	int a;

	for (a = 0; n[a] != '\0'; a++)
	{
		while (n[a] == 'a' || n[a] == 'A')
			n[a] = '4';
		while (n[a] == 'e' || n[a] == 'E')
			n[a] = '3';
		while (n[a] == 'o' || n[a] == 'O')
			n[a] = '0';
		while (n[a] == 't' || n[a] == 'T')
			n[a] = '7';
		while (n[a] == 'l' || n[a] == 'L')
			n[a] = '1';
	}
	return (n);
}

