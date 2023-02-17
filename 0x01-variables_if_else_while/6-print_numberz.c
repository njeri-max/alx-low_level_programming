#include <stdio.h>
/**
 * main - prints numbers 0-9 without using char or printf/puts,
 * and putchar 2x max
(*
 * Return: 0 on success
 */
int main(void)
{
	int k  = '0';

	while (k <= '9')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
