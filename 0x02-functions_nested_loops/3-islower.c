#include "main.h"
/**
 * _islower - test whether character is a
 * lowercase letter from alphabet
 * @c: is the test character
 * Return: 1 if c is lowercase, 0 if it is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
