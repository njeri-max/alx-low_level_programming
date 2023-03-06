#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @n : bytes copied from memory area
 * @src: char array copied from
 * @dest: char array copied into
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{


	char *t = dest;


	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;

	}
	return (t);
}


