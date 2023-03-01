#include "main.h"
/**
 * _strncat - Concatinates two strings
 * @dest: destination string
 * @src: source value
 * @n: maximum number of bytes from src
 * Return: pointer to the resulting strong dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, a = 0;

	while (dest[length])
	{
		length++;
	}
	while (a < n && src[a])
	{
		dest[length] = src[a];
		length++;
		a++;
	}
	dest[length + n + 1] = '\0';
	return (dest);
}
