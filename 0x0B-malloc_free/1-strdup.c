#include "main.h"

/**
 * _strdup - duplicates a string of the orignal string `str`
 * @str: original strong to duplicate
 * Return: NULL if `str` is null  or space is insufficient
 * otherwse a pointer is returned o duplicated `str`
 */

char *_strdup(char *str)
{
	char *ptr;
	int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a += 1)
		;

	ptr = malloc(a * sizeof(ptr) + 1);
	if (ptr == NULL)
		return (NULL);

	for (b = 0; b < a; b += 1)
		ptr[b] = str[b];
	ptr[b] = '\0';

	return (ptr);
}
