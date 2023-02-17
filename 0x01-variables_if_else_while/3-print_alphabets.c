#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase,followed by	uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);

}
