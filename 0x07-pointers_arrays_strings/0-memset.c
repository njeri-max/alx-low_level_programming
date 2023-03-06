#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: integer value pointed to by `s`
 * @b: constant byte
 * @s: character type pointer memory area
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: pointer to memory area `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j;

	j = 0;
	while (n > 0)
	{
		s[j] = b;
		j++;
		n--;
	}
	return (s);
}

