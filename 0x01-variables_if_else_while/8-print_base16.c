#include <stdio.h>
/**
 * main - prints all numbers of base 16.
(*
 * Return: 0 on success
 */
int main(void)
{
	int j = '0';

	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	j = 'a';
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);

}
