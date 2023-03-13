#include "main.h"

/**
 * create_array - creates an array of chars, initializing it with specific char
 * @size: array size
 * @c: specified char
 * Return: NULL if size is 0 or it fails, otherwise returns char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int q;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (q = 0; q < size; q += 1)
		p[q] = c;
	return (p);
}

