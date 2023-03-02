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
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}



