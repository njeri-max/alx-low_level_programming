#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: character pointer type
 * @accept: char array to compare bytes
 * Return: number of bytes in initial segment `s`
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
