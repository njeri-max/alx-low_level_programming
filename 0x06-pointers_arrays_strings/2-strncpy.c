#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string to be appended to
 * @src: source string to be appended
 * @n: the maximumamount of times src should be copied
 * Return: destinattion string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}


