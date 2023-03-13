#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new allocated space in mem
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a += 1)
		;
	for (b = 0; s2[b] != '\0'; b += 1)
		;

	ptr = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (a + b + 1); c += 1)
	{
		if (c < a)
			ptr[c] = s1[c];
		else
			ptr[c] = s2[d++];
	}
	return (ptr);
}
