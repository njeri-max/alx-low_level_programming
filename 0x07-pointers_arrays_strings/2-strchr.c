#include "main.h"
/**
 * _strchr - Locates a character in a  string
 * @c: character type
 * @s: Charcter pointer type
 * Return: pointer to the first occurence of a character
 * or NULL if it is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
